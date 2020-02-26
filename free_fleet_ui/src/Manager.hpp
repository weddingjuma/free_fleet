/*
 * Copyright (C) 2020 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef FREE_FLEET_UI__SRC__MANAGER_HPP
#define FREE_FLEET_UI__SRC__MANAGER_HPP

#include <QMainWindow>
#include <QGraphicsScene>
#include <QHBoxLayout>
#include <QVBoxLayout>

#include "Viewer.hpp"
#include "MapConfig.hpp"

namespace free_fleet
{
namespace viz
{

class Manager : public QMainWindow
{
  Q_OBJECT

public:

  Manager(QWidget* parent = nullptr);

  bool load_config(const QString& filename);

private slots:

  void open_config();

private:

  /// There will only be one instance
  static Manager* instance;

  static Manager* get_instance();

  QGraphicsScene* scene;

  Viewer* viewer;

  MapConfig map_config;

};

} // namespace viz
} // namespace free_fleet

#endif // FREE_FLEET_UI__SRC__MANAGER_HPP